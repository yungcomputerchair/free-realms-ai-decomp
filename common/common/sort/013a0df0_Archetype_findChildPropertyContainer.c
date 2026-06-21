// addr: 0x013a0df0
// name: Archetype_findChildPropertyContainer
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Archetype_findChildPropertyContainer(void * thisObj) */

void * __fastcall Archetype_findChildPropertyContainer(void *thisObj)

{
  void *pvVar1;
  
                    /* Fetches the Archetype's child key/container field and tail-calls
                       PropertyContainer_findChild. Evidence is the call to a +8 getter followed by
                       PropertyContainer_findChild, and use after casting Sortable to Archetype. */
  FUN_013795c0();
  pvVar1 = PropertyContainer_findChild(thisObj);
  return pvVar1;
}

