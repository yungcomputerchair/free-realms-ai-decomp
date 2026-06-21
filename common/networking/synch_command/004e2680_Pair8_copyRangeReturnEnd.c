// addr: 0x004e2680
// name: Pair8_copyRangeReturnEnd
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * Pair8_copyRangeReturnEnd(void *param_1,void *param_2,void *param_3)

{
                    /* Copies an 8-byte-element range and returns the destination end pointer. It
                       delegates the raw pair copy to Pair8_copyRange and computes dest plus the
                       source byte distance. */
  Pair8_copyRange(param_1,param_2,param_3);
  return (void *)((int)param_3 + ((int)param_2 - (int)param_1 >> 3) * 8);
}

