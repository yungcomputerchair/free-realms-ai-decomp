// addr: 0x0052b607
// name: GSynchronizationObject_wait
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char GSynchronizationObject_wait(void * this, uint timeoutMs_) */

char __thiscall GSynchronizationObject_wait(void *this,uint timeoutMs_)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_9c [132];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int *local_8;
  
                    /* Implements a timed wait: returns immediately if the object is already
                       signaled, otherwise creates a temporary GEvent, registers it as a waiter,
                       loops waiting with remaining timeout, and cleans up. A timeout value of 0
                       tests only and 0xffffffff is treated as infinite. */
  uVar1 = timeoutMs_;
  local_8 = this;
  cVar2 = (**(code **)(*(int *)this + 0x18))();
  if (cVar2 == '\0') {
    if (timeoutMs_ == 0) {
      timeoutMs_._3_1_ = '\0';
    }
    else {
      GEvent_ctor(local_9c,'\0');
      iVar3 = GSynchronizationObject_addWaiter(this,&LAB_0052b5f0,local_9c);
      if ((char)iVar3 == '\0') {
        timeoutMs_._3_1_ = '\0';
      }
      else {
        bVar6 = timeoutMs_ != 0xffffffff;
        timeoutMs_._3_1_ = '\0';
        uVar5 = uVar1;
        if (bVar6) {
          piVar4 = (int *)FUN_004f9372(local_18);
          local_10 = *piVar4;
          local_c = piVar4[1];
        }
        while (cVar2 = FUN_00524c72(uVar5), cVar2 != '\0') {
          cVar2 = (**(code **)(*local_8 + 0x18))();
          if (cVar2 != '\0') {
            timeoutMs_._3_1_ = '\x01';
            break;
          }
          if (uVar1 != 0xffffffff) {
            piVar4 = (int *)FUN_004f9372(local_18);
            if (uVar1 <= (uint)(*piVar4 - local_10)) break;
            uVar5 = uVar1 - (*piVar4 - local_10);
          }
        }
        GSynchronizationObject_removeWaiter(local_8,&LAB_0052b5f0,local_9c);
      }
      FUN_0051033b();
    }
  }
  else {
    timeoutMs_._3_1_ = '\x01';
  }
  return timeoutMs_._3_1_;
}

