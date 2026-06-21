// addr: 0x0149af60
// name: Expression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Expression_serialize(int * param_1, void * param_2) */

void __thiscall Expression_serialize(void *this,int *param_1,void *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes a binary Expression by writing QueryNode base data and optional
                       LHS/RHS expression children. Evidence is 'Starting Expression:', 'LHS:',
                       'RHS:', and 'Ending Expression'. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting Expression:\n");
  QueryNode_serialize(this,param_1,piVar2);
  DebugStream_writeCString(param_1,"LHS:\n");
  piVar2 = *(int **)((int)this + 0x1c);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"RHS:\n");
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
  DebugStream_writeCString(param_1,"Ending Expression\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

