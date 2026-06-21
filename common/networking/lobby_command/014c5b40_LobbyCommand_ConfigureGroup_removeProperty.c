// addr: 0x014c5b40
// name: LobbyCommand_ConfigureGroup_removeProperty
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandConfigureGroup.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_ConfigureGroup_removeProperty(void * thisObj, void * key) */

int __thiscall LobbyCommand_ConfigureGroup_removeProperty(void *this,void *thisObj,void *key)

{
  bool bVar1;
  undefined3 extraout_var;
  int in_EDX;
  int extraout_EDX;
  
                    /* Removes an entry from mPropertySet after checking the set member is valid.
                       The callee finds the key, destroys any stored value, erases the node, and
                       returns success. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\lobby_command\\LobbyCommandConfigureGroup.cpp",0x66);
    in_EDX = extraout_EDX;
  }
  bVar1 = PropertySet_removeProperty(*(void **)((int)this + 8),in_EDX);
  return CONCAT31(extraout_var,bVar1);
}

