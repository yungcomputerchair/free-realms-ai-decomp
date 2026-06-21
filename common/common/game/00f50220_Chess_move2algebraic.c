// addr: 0x00f50220
// name: Chess_move2algebraic
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00f50527) */
/* WARNING: Removing unreachable block (ram,0x00f5047b) */
/* WARNING: Removing unreachable block (ram,0x00f5039d) */
/* WARNING: Removing unreachable block (ram,0x00f504a9) */
/* WARNING: Removing unreachable block (ram,0x00f50559) */
/* WARNING: Removing unreachable block (ram,0x00f50570) */
/* private: char * __thiscall Chess::move2algebraic(class ChessMove,class ChessPosition *) */

char * __thiscall Chess::Chess_move2algebraic(Chess *this,uint param_2,int param_3)

{
  ChessMove CVar1;
  char cVar2;
  ChessMove *pCVar3;
  char *dest;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ChessMove CVar8;
  ChessMove *pCVar9;
  char *pcVar10;
  int local_208;
  uint local_204;
  int local_200;
  Chess *local_1fc;
  ChessMove local_1f8 [400];
  char local_68 [100];
  uint local_4;
  
                    /* Converts a ChessMove and ChessPosition to algebraic notation, including
                       captures/disambiguation, using chess move generators and piece-name helpers.
                        */
  local_4 = DAT_01b839d8 ^ (uint)&local_208;
  local_208 = param_3;
  iVar6 = 99;
  pCVar3 = local_1f8 + 2;
  do {
    pCVar3[-2] = (ChessMove)0x0;
    pCVar3[-1] = (ChessMove)0x0;
    *pCVar3 = (ChessMove)0x0;
    pCVar3[1] = (ChessMove)0x0;
    pCVar3 = pCVar3 + 4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  local_1fc = this;
  dest = _malloc(10);
  *dest = '\0';
  if ((param_2 & 0x9000000) == 0) {
    if ((param_2 & 0x12000000) == 0) {
      local_204 = param_2 & 0xff;
      iVar6 = *(int *)(param_3 + 0x14 + local_204 * 4);
      CVar8 = SUB41(param_2 >> 8,0);
      local_200 = iVar6;
      if ((iVar6 == 1) || (iVar6 == -1)) {
        if ((*(int *)(param_3 + 0x14 + (param_2 >> 8 & 0xff) * 4) == 0) &&
           ((param_2 & 0x4000000) == 0)) {
          _sprintf(dest,"%c%d",(int)(char)(((byte)CVar8 & 7) + 0x61));
        }
        else {
          _sprintf(dest,"%cx%c%d",(int)(char)(((byte)SUB41(param_2,0) & 7) + 0x61));
        }
      }
      else {
        if (*(char *)(param_3 + 0x10) == '\0') {
          pCVar3 = all_w_non_cap(this,local_1f8);
          pCVar3 = all_w_cap(this,pCVar3);
        }
        else {
          pCVar3 = all_b_non_cap(this,local_1f8);
          pCVar3 = all_b_cap(this,pCVar3);
          iVar6 = -iVar6;
        }
        cVar2 = num_to_piece(this,iVar6);
        _sprintf(local_68,"%c",(int)cVar2);
        pcVar4 = local_68;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)local_68;
        pcVar4 = dest + -1;
        do {
          pcVar10 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = local_68;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar4 = pcVar4 + 1;
        }
        if (local_1f8 < pCVar3) {
          do {
            pCVar9 = pCVar3 + -4;
            if (((pCVar3[-3] == CVar8) &&
                (CVar1 = *pCVar9, *(int *)(local_208 + 0x14 + (uint)(byte)CVar1 * 4) == local_200))
               && (CVar1 != SUB41(param_2,0))) {
              uVar5 = local_204 & 0x80000007;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
              }
              if ((int)(char)((byte)CVar1 & 7) == uVar5) {
                _sprintf(local_68,"%d",8 - (local_204 >> 3));
                pcVar4 = local_68;
                do {
                  cVar2 = *pcVar4;
                  pcVar4 = pcVar4 + 1;
                } while (cVar2 != '\0');
                uVar5 = (int)pcVar4 - (int)local_68;
                pcVar4 = dest + -1;
                do {
                  pcVar10 = pcVar4 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (*pcVar10 != '\0');
              }
              else {
                _sprintf(local_68,"%c",(int)(char)((char)uVar5 + 'a'));
                pcVar4 = local_68;
                do {
                  cVar2 = *pcVar4;
                  pcVar4 = pcVar4 + 1;
                } while (cVar2 != '\0');
                uVar5 = (int)pcVar4 - (int)local_68;
                pcVar4 = dest + -1;
                do {
                  pcVar10 = pcVar4 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (*pcVar10 != '\0');
              }
              pcVar10 = local_68;
              for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar4 = pcVar4 + 4;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar4 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar4 = pcVar4 + 1;
              }
            }
            pCVar3 = pCVar9;
          } while (local_1f8 < pCVar9);
        }
        if (*(int *)(local_208 + 0x14 + (uint)(byte)CVar8 * 4) == 0) {
          pcVar4 = "%c%d";
        }
        else {
          pcVar4 = "x%c%d";
        }
        _sprintf(local_68,pcVar4,(int)(char)(((byte)CVar8 & 7) + 0x61));
        pcVar4 = local_68;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)local_68;
        pcVar4 = dest + -1;
        do {
          pcVar10 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = local_68;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      if (param_2._2_1_ != 0) {
        cVar2 = num_to_piece(local_1fc,(uint)param_2._2_1_);
        _sprintf(local_68,"=%c",(int)cVar2);
        pcVar4 = local_68;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)local_68;
        pcVar4 = dest + -1;
        do {
          pcVar10 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = local_68;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
    }
    else {
      *(undefined1 **)dest = &LAB_004f2d4f;
    }
  }
  else {
    *(undefined4 *)dest = DAT_01872704;
    *(undefined2 *)(dest + 4) = DAT_01872708;
  }
  return dest;
}

