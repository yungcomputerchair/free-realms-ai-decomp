// addr: 0x01498420
// name: LastActionQueryNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LastActionQueryNode_serialize(int * param_1, void * param_2) */

void __thiscall LastActionQueryNode_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes a LastActionQueryNode by writing the QueryNode base, event id, and
                       event-caused-by fields. Evidence is the LastActionQueryNode start/end strings
                       and field labels. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting LastActionQueryNode\n");
  QueryNode_serialize(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Event ID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"EventCausedBy: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(param_1,"Ending LastActionQuerynode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

