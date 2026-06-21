// addr: 0x013fc390
// name: EventEmissionDepthMap_setCurrentDepthValue
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventEmissionDepthMap_setCurrentDepthValue(int value_) */

void EventEmissionDepthMap_setCurrentDepthValue(int value_)

{
  int *piVar1;
  undefined4 local_4;
  
                    /* Stores a value in the event-emission-depth map entry for the current
                       Game_getEventEmissionDepth. Used by ProcessEventEmissionState leave paths and
                       CommandObjectDiscard initialization. */
  local_4 = Game_getEventEmissionDepth();
  piVar1 = (int *)FUN_013fbc20(&local_4);
  *piVar1 = value_;
  return;
}

