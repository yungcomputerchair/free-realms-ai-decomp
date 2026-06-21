// addr: 0x014ee770
// name: AccountCommand_BulkIntroduceAccount_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall AccountCommand_BulkIntroduceAccount_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for AccountCommand_BulkIntroduceAccount;
                       installs/uses class vtable and runs base cleanup and frees this when
                       requested. */
  AccountCommand_BulkIntroduceAccount_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

