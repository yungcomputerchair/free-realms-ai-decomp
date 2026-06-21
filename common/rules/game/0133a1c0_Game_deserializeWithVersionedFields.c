// addr: 0x0133a1c0
// name: Game_deserializeWithVersionedFields
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall Game_deserializeWithVersionedFields(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uStack_454;
  int local_41c;
  int local_418;
  void *local_414;
  void *local_410;
  void *local_40c;
  int local_408;
  int *local_404;
  undefined1 *local_400;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Reads Game versioned fields before delegating to Game_deserialize and ending
                       the frame; newer versions include extra int-pair vectors and player objects.
                       Evidence: cwgame.cpp assertions and calls Game_deserialize plus several
                       deserializer helpers. */
  puStack_3f8 = &LAB_0167b9e3;
  local_3fc = ExceptionList;
  uStack_454 = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = (undefined1 *)&uStack_454;
  ExceptionList = &local_3fc;
  local_414 = param_2;
  local_3f4 = 0;
  local_404 = param_1;
  local_8 = uStack_454;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&local_41c);
  if (cVar1 == '\0') {
    uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc46);
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    local_410 = param_2;
    Game_deserializeIntPairVector_01300190(&local_410,param_1 + 0xe3);
    bVar2 = Deserializer_readInteger(param_2,param_1 + 0xe6);
    if (bVar2) {
      local_40c = param_2;
      bVar2 = Deserializer_readIntegerVector(&local_40c,param_1 + 0xe7);
      if (bVar2) {
        bVar2 = Deserializer_readIntegerVector(&local_40c,param_1 + 0xeb);
        if (bVar2) {
          if (0x20 < local_41c) {
            FUN_004fb6c2();
            uVar3 = Game_deserializeIntPairVector_01300190(&local_410,param_1 + 0xef);
            if ((char)uVar3 == '\0') {
              uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc60);
              ExceptionList = local_3fc;
              return uVar3 & 0xffffff00;
            }
          }
          if (0x34 < local_41c) {
            (**(code **)(param_1[-4] + 0x25c))();
            iVar4 = 0;
            local_418 = 0;
            bVar2 = Deserializer_readInteger(param_2,&local_418);
            if (!bVar2) {
              uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc68);
              ExceptionList = local_3fc;
              return uVar3 & 0xffffff00;
            }
            for (; iVar4 < local_418; iVar4 = iVar4 + 1) {
              local_408 = 0;
              cVar1 = FUN_0132d830(param_2,&local_408);
              if (cVar1 == '\0') {
                uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc6d);
                ExceptionList = local_3fc;
                return uVar3 & 0xffffff00;
              }
              if (local_408 != 0) {
                (**(code **)(param_1[-4] + 600))(local_408);
              }
            }
          }
          bVar2 = Game_deserialize(param_1,param_2);
          if (bVar2) {
            local_3f4 = 0xffffffff;
            uVar3 = FUN_0133a5a7();
            return uVar3;
          }
          uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc76);
          uVar3 = uVar3 & 0xffffff00;
        }
        else {
          uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc5b);
          uVar3 = uVar3 & 0xffffff00;
        }
      }
      else {
        uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc58);
        uVar3 = uVar3 & 0xffffff00;
      }
    }
    else {
      uVar3 = FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xc54);
      uVar3 = uVar3 & 0xffffff00;
    }
  }
  ExceptionList = local_3fc;
  return uVar3;
}

