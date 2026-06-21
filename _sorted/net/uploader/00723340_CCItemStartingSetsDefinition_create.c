// addr: 0x00723340
// name: CCItemStartingSetsDefinition_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CCItemStartingSetsDefinition_create(undefined4 arg_) */

void * CCItemStartingSetsDefinition_create(int arg_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0xdc bytes and constructs a CCItemStartingSetsDefinition, returning
                       null on allocation failure. Evidence is the named
                       CCItemStartingSetsDefinition_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155021b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xdc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CCItemStartingSetsDefinition_ctor(pvVar1,arg_);
  }
  ExceptionList = local_c;
  return pvVar1;
}

