// addr: 0x014d5380
// name: GuildCommand_CreateGuild_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GuildCommand_CreateGuild_create(void) */

void * GuildCommand_CreateGuild_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a GuildCommand_CreateGuild, returning null on
                       allocation failure. Evidence is the GuildCommand_CreateGuild_ctor callee or
                       vtable-named constructor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016acf4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GuildCommand_CreateGuild_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

