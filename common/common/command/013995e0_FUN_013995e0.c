// addr: 0x013995e0
// name: FUN_013995e0
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void actionId_releaseTemporaryHandle(int actionId_) */

void actionId_releaseTemporaryHandle(int actionId_)

{
                    /* Obtains/normalizes an action id through FUN_01321f20 and passes its address
                       to a cleanup helper. The only known caller is
                       CommandObjectInstallActionMap_doCommand, but there is not enough evidence for
                       a stable domain name. */
  actionId_ = FUN_01321f20();
  FUN_0042c155(&actionId_);
  return;
}

