using System.Text;
using System.Text.Json;
using UnrealSharp.Attributes;
using UnrealSharp.Engine;
using UnrealSharp.expCSharp;

namespace ManagedexpCSharp;

[UClass]
public class APlayerControllerCore : APlayerControllerWrapper
{
    public APlayerControllerCore()
    {
        SystemLibrary.LogString(PrintPrimaryActorTick("CTOR"));
    }

    protected override void BeginPlay()
    {
        base.BeginPlay();
        SystemLibrary.LogString(PrintPrimaryActorTick("BeginPlay"));
    }

    public override void ConstructionScript()
    {
        base.ConstructionScript();
        SystemLibrary.LogString(PrintPrimaryActorTick("ConstructionScript"));
    }
    
    private string PrintPrimaryActorTick(string place)
    {
        var sb = new StringBuilder();
        sb.AppendLine($"Hello from C#:{place} CanEverTick " + PrimaryActorTick.CanEverTick);
        sb.AppendLine($"Hello from C#:{place} TickGroup " + PrimaryActorTick.TickGroup);
        sb.AppendLine($"Hello from C#:{place} EndTickGroup " + PrimaryActorTick.EndTickGroup);
        sb.AppendLine($"Hello from C#:{place} TickEvenWhenPaused " + PrimaryActorTick.TickEvenWhenPaused);
        sb.AppendLine($"Hello from C#:{place} StartWithTickEnabled " + PrimaryActorTick.StartWithTickEnabled);
        sb.AppendLine($"Hello from C#:{place} AllowTickOnDedicatedServer " + PrimaryActorTick.AllowTickOnDedicatedServer);
        sb.AppendLine($"Hello from C#:{place} TickInterval " + PrimaryActorTick.TickInterval);

        return sb.ToString();
    }
}