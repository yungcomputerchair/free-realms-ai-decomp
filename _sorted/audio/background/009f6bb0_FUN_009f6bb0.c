// addr: 0x009f6bb0
// name: FUN_009f6bb0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_009f6bb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  puStack_8 = &LAB_015a96c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  BackgroundTrackManager_ctor(param_1);
  ExceptionList = local_c;
  return;
}

