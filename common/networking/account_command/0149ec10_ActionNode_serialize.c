// addr: 0x0149ec10
// name: ActionNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionNode_serialize(int * param_1, void * param_2) */

void __thiscall ActionNode_serialize(void *this,int *param_1,void *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes an ActionNode with target, install event/phase/action, prevent-by
                       text, force flag, and property key. Evidence is 'Starting ActionNode' plus
                       the listed member-label strings. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting ActionNode\n");
  ExpressionTreeNode_serialize(this,param_1,(int)piVar2);
  DebugStream_writeCString(param_1,"NodeTarget: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"Install Action Event: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(param_1,"Install Action Phase: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(param_1,"Install Action:\n");
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
  DebugStream_writeCString(param_1,"PreventBy_Text: ");
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
  DebugStream_writeCString(param_1,"Force: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0x24));
  DebugStream_writeCString(param_1,"PropertyKey: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(param_1,"Ending Actionnode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

