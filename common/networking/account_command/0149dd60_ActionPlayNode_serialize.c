// addr: 0x0149dd60
// name: ActionPlayNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionPlayNode_serialize(int * param_1, void * param_2) */

void __thiscall ActionPlayNode_serialize(void *this,int *param_1,void *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes an ActionPlayNode with ExpressionTreeNode base data, play area id,
                       optional play text expression, and play default/no-effect flags. Evidence is
                       the ActionPlayNode marker and field labels. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting ActionPlayNode\n");
  ExpressionTreeNode_serialize(this,param_1,(int)piVar2);
  DebugStream_writeCString(param_1,"PlayArea ID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"Play_Text: ");
  piVar2 = *(int **)((int)this + 0x14);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"Playdefault: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0x18));
  DebugStream_writeCString(param_1,"Playnoeffect: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0x19));
  DebugStream_writeCString(param_1,"Ending ActionPlaynode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

