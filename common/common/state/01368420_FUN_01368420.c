// addr: 0x01368420
// name: FUN_01368420
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * get_or_create_related_object(void * this) */

void * get_or_create_related_object(void *this)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000008;
  
                    /* Returns the result of an object lookup/creation helper; exact class is not
                       identifiable from this thunk. */
  puVar1 = (undefined4 *)Game_IntMap_findOrInsertValueSlot(&this);
  *puVar1 = in_stack_00000008;
  return (void *)CONCAT31((int3)((uint)puVar1 >> 8),1);
}

