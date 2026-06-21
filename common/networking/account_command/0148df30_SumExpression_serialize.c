// addr: 0x0148df30
// name: SumExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SumExpression_serialize(int * param_1, int param_2) */

void __thiscall SumExpression_serialize(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
                    /* Serializes/dumps SumExpression after its query/expression base, writing
                       PlayArea and Key fields. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting SumExpression\n");
  Expression_serialize(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"PlayArea: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(param_1,"Key: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(param_1,"Ending SumExpression\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

