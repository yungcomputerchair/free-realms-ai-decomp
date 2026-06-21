// addr: 0x00721af0
// name: CCItemTypesDefinition_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CCItemTypesDefinition_create(void * owner) */

void * CCItemTypesDefinition_create(void *owner)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and initializes a CCItemTypesDefinition object, assigning its
                       vtable, clearing fields, and storing the owner argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0154fedb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = CCItemTypesDefinition::vftable;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = owner;
    puVar1[6] = 0;
  }
  ExceptionList = local_c;
  return puVar1;
}

