// addr: 0x01305bf0
// name: StdVector12_uninitializedCopyRange
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector12_uninitializedCopyRange(int param_1, void * param_2, void *
   param_3, void * param_4) */

void StdVector12_uninitializedCopyRange(int param_1,void *param_2,void *param_3,void *param_4)

{
                    /* Wrapper around the 12-byte uninitialized copy-construct range helper, masking
                       the low byte of param_1 before forwarding. Evidence:
                       StdVector12_assignFromVector uses it when appending/copying new records into
                       vector storage. */
  StdVector12_uninitializedCopyConstructRange(param_1,(int)param_2,(int)param_3);
  return;
}

