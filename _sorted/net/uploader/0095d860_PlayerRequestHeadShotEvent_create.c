// addr: 0x0095d860
// name: PlayerRequestHeadShotEvent_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayerRequestHeadShotEvent_create(void * player) */

void __fastcall PlayerRequestHeadShotEvent_create(void *player)

{
  int *piVar1;
  int iVar2;
  void *this;
  uint playerId_;
  uint requestId_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a PlayerRequestHeadShotEvent after obtaining player
                       state and incrementing a request counter. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159580b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  requestId_ = 0x50;
  playerId_ = 0x95d88f;
  this = Mem_Alloc(0x50);
  local_4 = 0;
  if (this != (void *)0x0) {
    iVar2 = *(int *)((int)player + 0x808);
    (**(code **)(*(int *)((int)player + 0x54) + 0x10))();
    iVar2 = *(int *)(iVar2 + 4);
    piVar1 = (int *)(iVar2 + 0x9c);
    *piVar1 = *piVar1 + 1;
    PlayerRequestHeadShotEvent_ctor(this,*(void **)(iVar2 + 0x9c),playerId_,requestId_);
  }
  ExceptionList = local_c;
  return;
}

