// addr: 0x012cd490
// name: LobbyService_unregisterLobby
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/LobbyService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyService_unregisterLobby(void * this, void * lobby) */

void __thiscall LobbyService_unregisterLobby(void *this,void *lobby)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  rsize_t _DstSize;
  int *extraout_EAX;
  int iVar4;
  int *_Dst;
  int *unaff_EDI;
  undefined1 auStack_8 [4];
  int *piStack_4;
  
                    /* Removes a lobby from the service's id-indexed tree and vector/list of active
                       lobby ids. It asserts the lobby argument and is called from the
                       TradingCard::Lobby destructor path. */
  if (lobby == (void *)0x0) {
    FUN_012f5a60("lobby","..\\common\\common\\lobby\\LobbyService.cpp",0x134);
  }
  lobby = (void *)FUN_01301f30();
  LobbyServiceLobbyMap_lowerBound((void *)((int)this + 4),auStack_8,&lobby,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  piStack_4 = *(int **)((int)this + 8);
  iVar4 = extraout_EAX[1];
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 4))) {
    FUN_00d83c2d();
  }
  if ((int *)iVar4 != piStack_4) {
    FUN_012ccbe0(auStack_8,pvVar1,iVar4);
  }
  piVar2 = *(int **)((int)this + 0x4c);
  if (piVar2 < *(int **)((int)this + 0x48)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)((int)this + 0x48);
  if (*(int **)((int)this + 0x4c) < piVar3) {
    FUN_00d83c2d();
  }
  iVar4 = FUN_01301f30();
  for (_Dst = piVar3; (_Dst != piVar2 && (*_Dst != iVar4)); _Dst = _Dst + 1) {
  }
  piStack_4 = piVar3;
  if (this == (void *)0xffffffbc) {
    FUN_00d83c2d();
  }
  if (_Dst != piVar2) {
    iVar4 = *(int *)((int)this + 0x4c) - (int)(_Dst + 1) >> 2;
    if (0 < iVar4) {
      _DstSize = iVar4 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + -4;
  }
  return;
}

