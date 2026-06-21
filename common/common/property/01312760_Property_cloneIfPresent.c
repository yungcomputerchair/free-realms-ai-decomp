// addr: 0x01312760
// name: Property_cloneIfPresent
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Property_cloneIfPresent(void * allocatorOrContext, void * object) */

void * Property_cloneIfPresent(void *allocatorOrContext,void *object)

{
  void *pvVar1;
  
                    /* Returns null when the second argument is null, otherwise delegates to
                       FUN_01312450 to create or copy an object. Evidence is the sole null guard
                       around the call and broad use by property setters and serialization-related
                       routines. */
  if (object != (void *)0x0) {
    pvVar1 = (void *)FUN_01312450();
    return pvVar1;
  }
  return (void *)0x0;
}

