// addr: 0x014549b0
// name: CWMacroNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWMacroNode_serialize(int * this_obj, int serializer) */

void __thiscall CWMacroNode_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps CWMacroNode by calling the MacroNode serializer between
                       CWMacroNode start/end markers. The strings identify the wrapper class. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting CWMacroNode\n");
  MacroNode_serialize(this,this_obj,(int)piVar1);
  DebugStream_writeCString(this_obj,"Ending CWMacroNode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

