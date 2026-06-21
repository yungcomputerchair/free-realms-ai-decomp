// addr: 0x014c5b70
// name: LobbyCommand_ConfigureGroup_hasProperty
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandConfigureGroup.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_ConfigureGroup_hasProperty(void * thisObj, void * key) */

int __thiscall LobbyCommand_ConfigureGroup_hasProperty(void *this,void *thisObj,void *key)

{
  int iVar1;
  
                    /* Tests whether mPropertySet contains a non-null value for the supplied key
                       after asserting the property set exists. Evidence is the ConfigureGroup file
                       string, mPropertySet assertion at line 0x6c, and the callee returning a
                       boolean membership/non-null test. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\lobby_command\\LobbyCommandConfigureGroup.cpp",0x6c);
  }
  iVar1 = FUN_013110e0(thisObj);
  return iVar1;
}

