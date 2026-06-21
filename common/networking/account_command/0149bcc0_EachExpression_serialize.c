// addr: 0x0149bcc0
// name: EachExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EachExpression_serialize(int * param_1, void * param_2) */

void __thiscall EachExpression_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes an EachExpression by writing card-list target and playarea before
                       the Expression base payload. Evidence is 'Starting EachExpression',
                       'CardListTarget:', and 'PlayArea:'. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting EachExpression\n");
  DebugStream_writeCString(param_1,"CardListTarget: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(param_1,"PlayArea: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x28));
  Expression_serialize(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Ending EachExpression\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

