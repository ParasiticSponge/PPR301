#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "CorrectShape.h"
// include draw debug helpers header file
#include "DrawDebugHelpers.h"
#include "RandomShape.h"

ACorrectShape::ACorrectShape()
{
    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &ACorrectShape::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ACorrectShape::BeginPlay()
{
    Super::BeginPlay();
    //printFString("selected: %s", *FString::FromInt(rando->selectShape));

    switch (rando->selectShape)
    {
    case 0:
        selected = cube;
        break;
    case 1:
        selected = circle;
        break;
    case 2:
        selected = triangle;
        break;
    case 3:
        selected = hour;
        break;
    case 4:
        selected = star;
        break;
    default:
        break;
    }
    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1, 0, 5);

}

void ACorrectShape::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    //if the overlapping actor is the specific actor we identified in the editor
    //make sure the shape number is the same as the one chosen
    if (OtherActor && (OtherActor != this) && OtherActor == selected)
    {
        win = true;
        /*print("Overlap Begin");
        printFString("Overlapping Actor = %s", *OtherActor->GetName());*/
        print("Correct!");
        
        
    }
    if (OtherActor && (OtherActor != this) && OtherActor != selected)
    {
        wrong = true;
        /*print("Overlap Begin");
        printFString("Overlapping Actor = %s", *OtherActor->GetName());*/
        print("Incorrect!");
    }
}