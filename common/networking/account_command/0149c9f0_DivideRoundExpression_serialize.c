// addr: 0x0149c9f0
// name: DivideRoundExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DivideRoundExpression_serialize(int * param_1, void * param_2) */

void __thiscall DivideRoundExpression_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes a DivideRoundExpression by writing the Expression base and the
                       RoundUp boolean. Evidence is the DivideRoundExpression marker and 'RoundUp:'
                       field string. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting DivideRoundExpression\n");
  Expression_serialize(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"RoundUp: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0x24));
  DebugStream_writeCString(param_1,"Ending DivideRoundExpression\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

