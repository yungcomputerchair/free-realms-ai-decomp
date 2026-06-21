// addr: 0x014c5ac0
// name: LobbyCommand_ConfigureGroup_getProperty
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandConfigureGroup.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_ConfigureGroup_getProperty(void * thisObj, void * key) */

int __thiscall LobbyCommand_ConfigureGroup_getProperty(void *this,void *thisObj,void *key)

{
  int iVar1;
  
                    /* Looks up a value in mPropertySet after asserting the member is non-null.
                       Evidence is the LobbyCommandConfigureGroup.cpp file string, the mPropertySet
                       assertion at line 0x58, and the callee shape that searches a property map and
                       returns an extracted value. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\lobby_command\\LobbyCommandConfigureGroup.cpp",0x58);
  }
  iVar1 = FUN_013111d0(thisObj,key);
  return iVar1;
}

