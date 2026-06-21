// addr: 0x01499610
// name: IfThenExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IfThenExpression_serialize(int * param_1, void * param_2) */

void __thiscall IfThenExpression_serialize(void *this,int *param_1,void *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes an IfThenExpression, including the Expression base and optional
                       conditional expression pointer. Evidence is 'Starting IfThenExpression' and
                       'Conditional:' strings. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting IfThenExpression\n");
  Expression_serialize(this,param_1,piVar2);
  DebugStream_writeCString(param_1,"Conditional:\n");
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
  DebugStream_writeCString(param_1,"Ending IfThenExpression\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

