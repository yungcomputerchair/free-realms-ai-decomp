// addr: 0x00969590
// name: BasePlayerUpdatePacket_registerSubdispatchHandlers
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BasePlayerUpdatePacket_registerSubdispatchHandlers(void * dispatcher) */

void __thiscall BasePlayerUpdatePacket_registerSubdispatchHandlers(void *this,void *dispatcher)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *extraout_EAX;
  undefined4 uVar6;
  int *piVar7;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  char cStack0000001c;
  undefined4 *in_stack_00000020;
  undefined1 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined1 *in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Registers or builds a large table of player-update packet subdispatch
                       handlers, including BasePlayerUpdatePacket_SubDispatch, MountBasePacket,
                       achievement, quest, and many other packet handlers. Evidence is the many
                       handler callees and packet subdispatch names. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01596bf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((cStack0000001c == '\0') &&
     ((iVar4 = (**(code **)(*(int *)this + 0x24))(), iVar4 == 0 ||
      (cVar3 = FUN_0076c590(), cVar3 == '\0')))) {
    *(undefined4 *)dispatcher = 0;
  }
  else {
    if (in_stack_00000008 == 0) {
      iVar4 = *(int *)(*(int *)((int)this + 0x808) + 4);
      piVar7 = (int *)(iVar4 + 0x9c);
      *piVar7 = *piVar7 + 1;
      _cStack0000001c = *(void **)(iVar4 + 0x9c);
      puVar5 = (undefined4 *)&stack0x0000001c;
    }
    else {
      puVar5 = &stack0x00000008;
    }
    uVar6 = *puVar5;
    in_stack_00000008 = uVar6;
    FUN_00968550((void *)((int)this + 0x840));
    iVar4 = in_stack_0000000c;
    *extraout_EAX = uVar6;
    extraout_EAX[1] = *(undefined4 *)(in_stack_0000000c + 4);
    extraout_EAX[4] = in_stack_00000018;
    extraout_EAX[2] = in_stack_00000010;
    extraout_EAX[3] = in_stack_00000014;
    *(bool *)(extraout_EAX + 5) = in_stack_00000020 != (undefined4 *)0x0;
    if (in_stack_00000020 != (undefined4 *)0x0) {
      extraout_EAX[8] = *in_stack_00000020;
      extraout_EAX[9] = in_stack_00000020[1];
      extraout_EAX[0xc] = in_stack_00000020[4];
      extraout_EAX[0xd] = in_stack_00000020[5];
      extraout_EAX[0xe] = in_stack_00000020[6];
      extraout_EAX[0xf] = in_stack_00000020[7];
      extraout_EAX[0x10] = in_stack_00000020[8];
      extraout_EAX[0x11] = in_stack_00000020[9];
      extraout_EAX[0x12] = in_stack_00000020[10];
    }
    *(undefined1 *)(extraout_EAX + 0x14) = in_stack_00000024;
    extraout_EAX[0x15] = in_stack_00000028;
    extraout_EAX[0x16] = in_stack_00000034;
    if ((in_stack_0000002c != (undefined1 *)0x0) && (in_stack_00000030 != 0)) {
      _cStack0000001c = Mem_Alloc(0xd0);
      uStack_4 = 0;
      if (_cStack0000001c == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_008eb0a0();
      }
      uStack_4 = 0xffffffff;
      extraout_EAX[0x2c] = uVar6;
      _cStack0000001c = Mem_Alloc(0x10);
      uStack_4 = 1;
      if (_cStack0000001c == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_008d40a0();
      }
      uStack_4 = 0xffffffff;
      extraout_EAX[0x2d] = uVar6;
    }
    _cStack0000001c = (void *)FUN_00769a30();
    _in_stack_00000024 = FUN_007699f0();
    in_stack_0000000c = FUN_00769b30();
    in_stack_00000010 = FUN_00769b70();
    in_stack_00000014 = FUN_00769bb0();
    in_stack_00000018 = FUN_00769bf0();
    in_stack_00000020 = (undefined4 *)FUN_00769a70();
    in_stack_00000028 = FUN_00769c30();
    in_stack_00000034 = FUN_00769c70();
    for (iVar4 = *(int *)(iVar4 + 0x34); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      switch(*(undefined4 *)(iVar4 + 0x10)) {
      case 0:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_007c4050();
        break;
      case 1:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_00709a70();
        break;
      case 2:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_007dd650();
        break;
      case 3:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_007dd5f0();
        break;
      case 4:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_007dd6a0();
        break;
      case 5:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_0095e1d0();
        break;
      case 6:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_007dd700();
        break;
      case 7:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_007dd760();
        break;
      case 8:
        in_stack_0000002c = &stack0xffffffdc;
        piVar7 = (int *)FUN_008beba0();
        break;
      default:
        goto switchD_00969781_default;
      }
      if (piVar7 != (int *)0x0) {
        in_stack_00000030 = extraout_EAX[0x19];
        iVar2 = extraout_EAX[0x19];
        if (((iVar2 <= in_stack_00000030) &&
            (puVar1 = (undefined1 *)(in_stack_00000030 + 1), iVar2 < (int)puVar1)) &&
           (iVar2 <= in_stack_00000030)) {
          in_stack_0000002c = puVar1;
          if ((int)extraout_EAX[0x1a] < (int)puVar1) {
            FUN_009598b0(puVar1);
          }
          extraout_EAX[0x19] = in_stack_0000002c;
        }
        *(int **)(extraout_EAX[0x18] + in_stack_00000030 * 4) = piVar7;
        iVar2 = piVar7[2];
        piVar7[2] = iVar2 + 1;
        if (iVar2 == 0) {
          (**(code **)(*piVar7 + 0x24))();
        }
      }
switchD_00969781_default:
    }
    *(int *)dispatcher = in_stack_00000008;
  }
  ExceptionList = local_c;
  return;
}

