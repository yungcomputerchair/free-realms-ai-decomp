// addr: 0x013a1cd0
// name: PropertyContainer_insertChildIfPresent
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyContainer_insertChildIfPresent(void * param_1, void * param_2) */

void PropertyContainer_insertChildIfPresent(void *param_1,void *param_2)

{
  int in_ECX;
  int *unaff_EDI;
  int local_14;
  void *local_10;
  undefined1 local_c [12];
  
                    /* If a child/property pointer is non-null, builds a key/value pair using the
                       key read from param_1+4 and inserts it into a property tree/map.
                       LobbyCommandAddLeagueCards uses it after allocating a League-related property
                       object. */
  if (param_2 != (void *)0x0) {
    local_14 = PersistentComponent_getPersistentId(param_2);
    local_10 = param_2;
    PropertyContainerMap_insertOrFind((void *)(in_ECX + 0x58),local_c,&local_14,unaff_EDI);
  }
  return;
}

