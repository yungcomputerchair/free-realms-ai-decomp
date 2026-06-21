// addr: 0x0141ad70
// name: StateSpecificMessageGameCommand_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void StateSpecificMessageGameCommand_printDebug(void * this, void * out) */

void __thiscall StateSpecificMessageGameCommand_printDebug(void *this,void *out)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  undefined1 local_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Prints a State Specific Message Game Command debug dump with originating
                       class id and two optional stringified values, reporting NULL when absent. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016938f6;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_414;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffbdc;
  ExceptionList = &local_c;
  FUN_01241650("State Specific Message Game Command\n",0x24);
  GameCommand_dump(this,out);
  _sprintf(local_3f8,"OriginatingClassID: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar3 = local_3f8;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar3 - (int)(local_3f8 + 1));
  if (*(void **)((int)this + 0x30) == (void *)0x0) {
    _sprintf(local_3f8,"Value 1: NULL\n",uVar2);
  }
  else {
    pvVar4 = ValueData_toString(*(void **)((int)this + 0x30),local_414);
    local_4 = 0;
    if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
      iVar5 = (int)pvVar4 + 4;
    }
    else {
      iVar5 = *(int *)((int)pvVar4 + 4);
    }
    _sprintf(local_3f8,"Value 1: %s\n",iVar5);
    local_4 = 0xffffffff;
    if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_410);
    }
    local_3fc = 0xf;
    local_400 = 0;
    local_410 = (void *)((uint)local_410 & 0xffffff00);
  }
  pcVar3 = local_3f8;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar3 - (int)(local_3f8 + 1));
  if (*(void **)((int)this + 0x34) == (void *)0x0) {
    _sprintf(local_3f8,"Value 2: NULL\n",uVar2);
  }
  else {
    pvVar4 = ValueData_toString(*(void **)((int)this + 0x34),local_414);
    local_4 = 1;
    if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
      iVar5 = (int)pvVar4 + 4;
    }
    else {
      iVar5 = *(int *)((int)pvVar4 + 4);
    }
    _sprintf(local_3f8,"Value 2: %s\n",iVar5);
    local_4 = 0xffffffff;
    if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_410);
    }
    local_3fc = 0xf;
    local_400 = 0;
    local_410 = (void *)((uint)local_410 & 0xffffff00);
  }
  pcVar3 = local_3f8;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar3 - (int)(local_3f8 + 1));
  ExceptionList = local_c;
  return;
}

