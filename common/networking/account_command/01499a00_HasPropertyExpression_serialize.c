// addr: 0x01499a00
// name: HasPropertyExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HasPropertyExpression_serialize(int * param_1, void * param_2) */

void __thiscall HasPropertyExpression_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes the HasPropertyExpression fields after the Expression base; the
                       embedded start/end strings appear to have been copy-pasted from
                       IfThenExpression. It writes two scalar property-related fields at offsets
                       0x24 and 0x28. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting IfThenExpression\n");
  Expression_serialize(this,param_1,piVar1);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x24));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(param_1,"Ending IfThenExpression\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

