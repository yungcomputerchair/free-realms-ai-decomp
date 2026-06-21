// addr: 0x013aa180
// name: FUN_013aa180
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Engine_CollectionMapper_applyDefaultPropertyMappings(void) */

void Engine_CollectionMapper_applyDefaultPropertyMappings(void)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  char value_;
  int value__00;
  
                    /* Sets up default collection mapper property lists and copies defaults into the
                       mapper. */
  pvVar2 = (void *)(in_ECX + 0x10);
  value__00 = 1;
  pvVar1 = FUN_014396b0(pvVar2);
  FUN_014392a0(pvVar1,value__00);
  value_ = '\x01';
  pvVar1 = FUN_014396b0(pvVar2);
  FUN_014392c0(pvVar1,value_);
  pvVar2 = FUN_014396b0(pvVar2);
  Engine_CollectionMapper_copyDefaultPropertyList(pvVar2);
  FUN_013dd5b0();
  return;
}

