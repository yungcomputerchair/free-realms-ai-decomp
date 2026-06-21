// addr: 0x014895e0
// name: TargetQueryNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetQueryNode_serialize(int * param_1, int param_2) */

void __thiscall TargetQueryNode_serialize(void *this,int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes/dumps TargetQueryNode, including QueryNode base, pile/not fields,
                       nullable target text objects, modifier key, and optional alternate play area.
                        */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TargetQueryNode\n");
  QueryNode_serialize(this,param_1,piVar2);
  DebugStream_writeCString(param_1,"Pile: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"Not: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0x2c));
  DebugStream_writeCString(param_1,"Target1_Text: ");
  piVar2 = *(int **)((int)this + 0x24);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"Target2_Text: ");
  piVar2 = *(int **)((int)this + 0x28);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"ModifierKey: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x30));
  DebugStream_writeCString(param_1,"AltPlayArea: ");
  piVar2 = *(int **)((int)this + 0x20);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"Ending TargetQueryNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

