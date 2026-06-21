// addr: 0x014e51b0
// name: ArchCommand_ValidateUsername_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ArchCommand_ValidateUsername_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an ArchCommand_ValidateUsername object and calls its constructor.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afc6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ArchCommand_ValidateUsername_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

