// addr: 0x014c5b00
// name: LobbyCommand_ConfigureGroup_setProperty
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandConfigureGroup.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_ConfigureGroup_setProperty(void * thisObj, void * key, void *
   value) */

int __thiscall
LobbyCommand_ConfigureGroup_setProperty(void *this,void *thisObj,void *key,void *value)

{
  void *pvVar1;
  
                    /* Sets or inserts a value in mPropertySet after asserting the property set
                       exists. The wrapper first ensures/creates an entry for the key, then calls
                       the property assignment helper. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\lobby_command\\LobbyCommandConfigureGroup.cpp",0x5f);
  }
  FUN_01312380(thisObj);
  pvVar1 = Property_cloneIfPresent(thisObj,key);
  return (int)pvVar1;
}

