// addr: 0x01410b70
// name: CWGameTurn_generateEvent
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWGameTurn_generateEvent(void * this, int eventId_) */

bool __thiscall CWGameTurn_generateEvent(void *this,int eventId_)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generates a CWGameTurn event, logging the event id and checking whether any
                       generated event/action entries were produced. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692698;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x10) = eventId_;
  Game_logGeneral(*(void **)((int)this + 4),"GENERATEEVENT: %d",eventId_);
  if (*(int *)((int)this + 0x10) != 0x1b) {
    Game_logGeneral(*(void **)((int)this + 4),"CWGameTurn::generateEvent() got event %d ",eventId_);
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    iVar3 = StateMachine_sub_013f0010(*(void **)((int)this + 0x18));
    if ((char)iVar3 != '\0') {
      StateMachine_sub_013f0050(*(void **)((int)this + 0x18));
      goto LAB_01410c0b;
    }
  }
  (**(code **)(**(int **)((int)this + 4) + 0x178))(local_1c,uVar2);
LAB_01410c0b:
  if ((local_18 == (void *)0x0) || (local_14 - (int)local_18 >> 2 == 0)) {
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    bVar1 = false;
  }
  else {
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    bVar1 = true;
  }
  ExceptionList = local_c;
  return bVar1;
}

