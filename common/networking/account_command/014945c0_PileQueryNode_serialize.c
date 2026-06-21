// addr: 0x014945c0
// name: PileQueryNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PileQueryNode_serialize(int * param_1, void * param_2) */

void __thiscall PileQueryNode_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes a PileQueryNode by writing the QueryNode base, pile, comparison,
                       and nested value expression. Evidence is the 'Starting/Ending PileQueryNode'
                       and field label strings. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting PileQueryNode\n");
  QueryNode_serialize(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Pile: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"Comparison: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(param_1,"Value:\n");
  (**(code **)(*(int *)((int)this + 0x24) + 0x28))(param_1);
  DebugStream_writeCString(param_1,"Ending PileQueryNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

