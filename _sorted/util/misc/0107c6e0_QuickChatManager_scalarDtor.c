// addr: 0x0107c6e0
// name: QuickChatManager_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall QuickChatManager_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for QuickChatManager; calls QuickChatManager
                       cleanup and frees this when requested. */
  QuickChatManager_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

