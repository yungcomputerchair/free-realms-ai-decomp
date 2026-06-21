// addr: 0x01492c10
// name: QueryContainerNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void QueryContainerNode_serialize(int * param_1, int param_2) */

void __thiscall QueryContainerNode_serialize(void *this,int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes/dumps a query node with Pile, Pile2, and nullable
                       Target1_Text/Target2_Text fields. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting QueryContainerNode\n");
  QueryNode_serialize(this,param_1,piVar2);
  DebugStream_writeCString(param_1,"Pile: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"Pile2: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x20));
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
  DebugStream_writeCString(param_1,"Ending QueryPlayabilityNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

