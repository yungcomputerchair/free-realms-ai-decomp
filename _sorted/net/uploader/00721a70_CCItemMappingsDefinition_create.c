// addr: 0x00721a70
// name: CCItemMappingsDefinition_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CCItemMappingsDefinition_create(void * owner) */

void * CCItemMappingsDefinition_create(void *owner)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and initializes a CCItemMappingsDefinition object, assigning its
                       vtable, clearing list/count fields, and storing the owner argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0154feab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = CCItemMappingsDefinition::vftable;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = owner;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  ExceptionList = local_c;
  return puVar1;
}

