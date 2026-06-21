// addr: 0x01505ed0
// name: CommandObjectKill_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectKill.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectKill_doCommand(void * this) */

bool __fastcall CommandObjectKill_doCommand(void *this)

{
  void *command;
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes Kill by casting the target to Card, asserting killedCard,
                       constructing a follow-up command/effect object, applying it, then clearing
                       the temporary pointer. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b4f3b;
  local_c = ExceptionList;
  command = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  iVar1 = FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,&PlayElement::RTTI_Type_Descriptor,
                       &Card::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("killedCard","..\\common\\common\\command\\CommandObjectKill.cpp",0x2d);
  }
  pvVar2 = Mem_Alloc(0x140);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = CommandObjectDiscard_ctorDefaultInit(pvVar2,(void *)((int)this + 0x84),2);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)this + 0x124) = pvVar2;
  CommandObjectVector_pushBack(pvVar2,command);
  *(undefined4 *)((int)this + 0x124) = 0;
  ExceptionList = local_c;
  return true;
}

