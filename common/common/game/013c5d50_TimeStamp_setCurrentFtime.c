// addr: 0x013c5d50
// name: TimeStamp_setCurrentFtime
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TimeStamp_setCurrentFtime(undefined4) */

void TimeStamp_setCurrentFtime(undefined4 *param_1)

{
  undefined4 local_10 [2];
  ushort local_8;
  
                    /* Fills a two-word timestamp with _ftime64_s seconds and milliseconds. The
                       first output is time, the second is millitm. */
  __ftime64_s(local_10);
  *param_1 = local_10[0];
  param_1[1] = (uint)local_8;
  return;
}

