// addr: 0x01302220
// name: Lobby_clonePropertyIfPresent
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/Lobby.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Lobby_clonePropertyIfPresent(void * this, void * propertySet, void *
   propertyId) */

void __thiscall Lobby_clonePropertyIfPresent(void *this,void *propertySet,void *propertyId)

{
  int iVar1;
  
                    /* Checks a virtual predicate on the supplied property set/object and asserts on
                       failure, then delegates to Property_cloneIfPresent. Source path is Lobby.cpp.
                        */
  iVar1 = (**(code **)(*(int *)this + 0x58))(propertySet);
  if (iVar1 == 0) {
    FUN_012f5a60(&DAT_018d6f40,"..\\common\\common\\lobby\\Lobby.cpp",0x518);
  }
  Property_cloneIfPresent(propertySet,propertyId);
  return;
}

