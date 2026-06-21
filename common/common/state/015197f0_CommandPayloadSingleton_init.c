// addr: 0x015197f0
// name: CommandPayloadSingleton_init
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandPayloadSingleton_init(void) */

void CommandPayloadSingleton_init(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a 0x10-byte global command payload object and zeroes its
                       flag and three fields. Used before CommandPayload setters in command
                       emission. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7a3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbebb4 == (undefined1 *)0x0) {
    DAT_01cbebb4 = Mem_Alloc(0x10);
    if (DAT_01cbebb4 == (undefined1 *)0x0) {
      DAT_01cbebb4 = (undefined1 *)0x0;
    }
    else {
      *DAT_01cbebb4 = 0;
      *(undefined4 *)(DAT_01cbebb4 + 4) = 0;
      *(undefined4 *)(DAT_01cbebb4 + 8) = 0;
      *(undefined4 *)(DAT_01cbebb4 + 0xc) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

