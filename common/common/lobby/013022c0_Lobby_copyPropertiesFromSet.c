// addr: 0x013022c0
// name: Lobby_copyPropertiesFromSet
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/Lobby.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Lobby_copyPropertiesFromSet(void * this, void * propertySet) */

void __thiscall Lobby_copyPropertiesFromSet(void *this,void *propertySet)

{
  int iVar1;
  
                    /* Validates the supplied property set through a virtual check and then copies
                       from it via PropertySet_copyPropertiesFrom. Called while constructing
                       match/add-groups lobby data. */
  iVar1 = (**(code **)(*(int *)this + 0x58))(propertySet);
  if (iVar1 == 0) {
    FUN_012f5a60(&DAT_018d6f40,"..\\common\\common\\lobby\\Lobby.cpp",0x537);
  }
  PropertySet_copyPropertiesFrom((int)propertySet);
  return;
}

