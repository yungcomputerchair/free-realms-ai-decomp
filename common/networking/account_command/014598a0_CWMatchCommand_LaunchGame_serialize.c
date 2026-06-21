// addr: 0x014598a0
// name: CWMatchCommand_LaunchGame_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWMatchCommand_LaunchGame_serialize(int * this_obj, int serializer) */

void __thiscall CWMatchCommand_LaunchGame_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps CWMatchCommand_LaunchGame by delegating to its command
                       serializer between start/end markers. The embedded strings identify the
                       command class. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting CWMatchCommand_LaunchGame\n");
  MatchCommand_LaunchGame_dump(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending CWMatchCommand_LaunchGame\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

