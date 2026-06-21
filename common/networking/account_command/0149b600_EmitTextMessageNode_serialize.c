// addr: 0x0149b600
// name: EmitTextMessageNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EmitTextMessageNode_serialize(int * param_1, void * param_2) */

void __thiscall EmitTextMessageNode_serialize(void *this,int *param_1,void *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes an EmitTextMessageNode with ExpressionTreeNode base data, optional
                       message id expression, and message target class. Evidence is the
                       EmitTextMessageNode marker and field-label strings. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting EmitTextMessageNode\n");
  ExpressionTreeNode_serialize(this,param_1,(int)piVar2);
  DebugStream_writeCString(param_1,"Message ID: ");
  piVar2 = *(int **)((int)this + 0x10);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"Message target class: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(param_1,"Ending EmitTextMessageNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

