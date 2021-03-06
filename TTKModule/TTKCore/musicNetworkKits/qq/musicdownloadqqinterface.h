#ifndef MUSICDOWNLOADQQINTERFACE_H
#define MUSICDOWNLOADQQINTERFACE_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2018 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "musicobject.h"
#include "musicglobaldefine.h"

///////////////////////////////////////////////////////////////////////////
const QString QQ_UA_URL_1           = "NW9YVlRXYnBnNlBFS3Ardi9VR295R0l2aW43U3JvRlpWc1AxMkI2K1MvN3RMVjdsOGhZMVlPRmIrais2ajBJUW1UbmxBRjlyS25WNHRyU0FYbFFMeWFpMUo5YWxFNnkweHd6RERnPT0=";
///////////////////////////////////////////////////////////////////////////////
const QString QQ_ALBUM_URL          = "THpHd1YyR3FTL3RCQ2pLMFVwSTlrTEc1WUszYXBKNWFqTHRSMXMrSzJIdUJURWx3REoyOWZ0dmRxRXpmSGdaTlRGMTltYmdmZlU4RkFMbWRuTVhtZ0VBWmRVM3A1eVgxVVgzcUZwYkloQzdSNWJSL3VjTGZTNTRBbWJWekRxZ1NXYkdBR1NocW40cm9wRVYrU1EweVN1MHZFeVliM09zUmQ5eHI1RzBUZjU4by9MZVAyZnh1dXR1QkJhdE8zQnk5SlFCcm1MZHVabTRSTkFJSGhmNEgyQVlCc1o3UjR0VGQ=";
///////////////////////////////////////////////////////////////////////////////
const QString QQ_SONG_SEARCH_URL    = "SVhjL0RSZXRSOEFRc0sxaFlFb2Z4T3M0VUIwT1AxMy9LdnVRd0VBTlpqeHVNV2ZWTWF4eGJIN3R1dUY5cWI4Rlk4NTJPVVBIVzZ2TExZaWt4eU9Ic0Iwd1lMa0cybDJFbWlzb1JWSFIrZkw1QmFRSXlpYW1pRnJydXVveE4wM0dWQitINlZTZXkreExDZzdrSXErWkRuYlVKVzJRQ0t6U0xySGtnbjAyTG5zdUU2RUl4aVhjamI0bTQrdUVEcWd3QitLSzM3YmJhd0ZWVlJjdHE1bGtiVzNjZnNZT3NrR0lGbmRJcWNjRktoTGtlQXFZa2dKMHRtd2hvdS9wRWd5c1I1bUtEOGRLYVhRVHRaUnVhZ2dueGhjdWthbzVBZTBFaGlLRkliSVV4REZmbXh2Wjc3QzhVVmpMd2U1aFR4MXFoL0ZqdXF2dXhQOD0=";
const QString QQ_SONG_MINFO_URL     = "VTl3Ykp1cUk5TEFvY1JIc1E2aUFneXV4Y1VGRlVxVFM5ZTI2a283bExrNzk3WFl6ZEdneVdVN0JDeC9jUFRwVG9lTDBCVVphNWNlQTVXcnovV0lSZnZFOEZQcDFMdnNOdW1naitVdFJ4MFU9";
const QString QQ_SONG_INFO_URL      = "SzhpeW5CUERDZTB3QzllNFJLMXFtUXU3YVdZYWJrQUFkN3ZiSmQvNWRselRJV2dITUJUVjRRTmlZdFV5aXpIaTBadDJFc1lkWnlnSDg1cUk5Nmh2b1Q2NjlzOVNLQVNnSTkxT0dRaXBsRE09";
const QString QQ_SONG_LRC_URL       = "UkRvUTU1MHJGMmVDNDhRUWpXbnluVzViaVo0dGVKUHlxWHpnYzEvMnR2VU81WlJxYWpqY0ZEMC84anhRN3kwbm0vUGNxR20zZ1laUzg4Um5EOEdIL0FGS3pvK3VUMEgwMW1BaHFSYlA1OHJUSC9tQmpjUWVxTXk3RFo4PQ==";
const QString QQ_SONG_PIC_URL       = "SjhCT2UxMEZ5TnZackt2N1ovbmVYQzlUbzNQeXMwMFNSaWE2eGxFR2tBTm9pckk2VWZ1OWN4QzBkVEtYYUIrc2UxKzVHRU1Gd0EzbkZuR0Y=";
const QString QQ_SONG_128_URL       = "bmNTSUx0QWwrdE5uTHl6M1p6Kyt4cXdUWFJraXNCSUtuU1I1WTliTFhjMnlwTzkzYWcyenNSa3N4MGFuUWdMN0ZvTEZKeERHUy85QWRBK3hUWlpjZFh4ZUc4NXlGL1Ay";
const QString QQ_SONG_192_URL       = "cjZONVhBNXF0SnY3ekFROGh2U2o5WmJ2VFk3SGxnWkNPTm1qTEg3TmxZWllYUTVtMWdXMk4yUU9NTjZqWUtJWjZXL2oyeXdzbHFSVndFbW52TzhTaHloMko0QnU5dXJQb3NHdEpRPT0=";
const QString QQ_SONG_320_URL       = "dWRDRWxuNG5YTlRQZUlKUlJmZlNDNFUzOFpidXYrVndtbjNWZVNQMDBzNXlGKzZmeTl3aDZ0Ni9KYStPR3VFZDYrRDdQSEx5dCt4MlIwekVQQTd3dTR6ejFUdnBKYWRPaFFrYnRRPT0=";
const QString QQ_SONG_APE_URL       = "THBYOE1UN1lkcXg5eGNmOWhMVmpzVkVOMEQ0MUUrSTNjdVI4Q0VyU1FSOHFFbnNCZ29SL1ErK0xVSFkycHB0V0hNSEVMZUtZK2l4UGRWcHVzR05pNmxaRjdvL3FDemsxbVoxL1d3PT0=";
const QString QQ_SONG_FLAC_URL      = "bDVvT25YNEVaZ1o1QllHSm5pUzFSejdua3hVaFRZRjlTbGtSdDlnd01TckliTkovVHdWalE2MFlseHhjdG4xNTlYYS84TXMzWWJEWnJZWVI0MFFkNmQ0WkFoZXI2RkV4TnMrZFF3PT0=";
const QString QQ_SONG_KEY_URL       = "eXVTYmZQZW1EVDlBdGN1ajRZSG8vUlNCUElLRzduQTRaK3RyMjNlOTBuK0g5cGJsckhuT3dnM0pGNmRiUmNzeUVSU3VyUk5zLy9pSHdQSVRrTm1wMktlYTFoNFljbGVCejRFTWVtZTlCa2lVWk5TaXFwRkRjQT09";
///////////////////////////////////////////////////////////////////////////////
const QString QQ_ARTIST_URL         = "WERjRFh4WVhsWTdFOStMNWZTSnJGQjlTZHk5RVBqaTUyclRFRjZWVng5bExXNC9GTGdrRFFGQmxTbHpuMmZlSmZacTNLd0VBY21kVDdva1Q0aXlmcU9OWVMwNWtmbFZEbDVRa0JvZCtTWFBLVUtxUjNadmJweVQ2TVF3L0I5WlQ2Z05WcmNPMGZoWjh6d0ZUWHBmTjNKSnhGanVIcEt1L25IS0ZncDU5SzBLZ0o1ZzEvTUludEp4Y2NDbzJWc3VPS21kenpadTVhWDRldkwwUkgxMldSYkpBdC9PUWUvcUVJemZvMzFSVDRKNVBUSzhReUZMYXZWK1BxOG9PYTdWa1JSamxlTnQzNzVtcVJsRUdkRE1ONVhMdGRJQT0=";
const QString QQ_ARTIST_INFO_URL    = "UjR2VWxJSlVDeWVJb3FzY0N5VTBBTUZXeGQ1N3l6ZXB3eU92anVaQW1mRmtTUXE5MkFiZzhjQWZJM2JScmxwSm5FRlA1dUpVUDVEaG9LU3poYmppelgxbFU1OXE1N0N0M2JNWlZKeDdUZCswSXFoYkhYSGNVZURuUldOMExzRmZDUlBROHl0OTFBUnBQc0UxK3RkNnR3PT0=";
const QString QQ_AR_ALBUM_URL       = "REp6M2RPcGhXRE4xb3JCVlQ2VWZRdG9tUnZpbnQxR3N6cDhDaG5LTkZnZHJ2TG5BTEcrVW9JV3B4RmVlUjJMVGlsSUd5cmZHRVRxYTgxK1A5ckV5MElDWXJ1RmFKbVR5YkkyeTltWk5PUTJ1b0tMUW92cVdEcGJBZ2NGajdqZlN3djBsa3NIUFRaOFpCckIxeC9XaGZzSXE3cXlKSG1BUGRwNVAyK1VVMUVnYTZjTGE2MlRRMDVEcVJzZjhxL0lkaEJsQjFtQi9mYjYvT0hHSkRCYnBhMitnaFBqZHJRdm1KOGNBZHo4T3B6eWU4NTRPamM5YVRiRlBWRzg9";
const QString QQ_AR_MV_URL          = "NURjT21UVW9mVmRObnllV2RZNGZVUjB1RDhpOEt5cVE5U2x0L2JrcFl3ODF1TlY2NVVYTEliVzNTZ0U1TitYcW9jcjNJUDU0M1BYMzlUMWtxOTlUWU9NR295U255blB3U3BpTGJlY3NvVDEybmx1TWJrN09tZzlnK1F0WUZQTFREcVM1WDRNQ3pMWW5KK0p2U3dWOXlFNFpxWHNZbFZ1L2FIeHExVWpCTXUrYldwaXBna1c1RGlmU24xb2pFQUxNY0xoeVlETzZXZTV0cTZTV01UazhVc1NVMmcvTUlONEtYZ3pzYVFCZUdBS0kwc3dvL1NnSmRTM2JoVVlsS0xJa2s0endNdz09";
const QString QQ_AR_SIM_URL         = "Q3l2R1ZmOGdsWHRIWTVtZGZxRXZUZ3F0VllzZDlTc0M2TmNkQ0N3aHVNZHVQbG1kb0gwS0JGbGRQN3lWblcrUnYydFFpWUFZTHlaVHcxMmdzbWdvNmRMQVVRV0RYSVZBT3dFWS9qMm5zS2NFdEFZMXJuOXVzQU5SQ1ErWU1BWlFMVGIrOFdTcXcySXlMUmh4UEttTDlpY0tQdFBOc2NLbUlmTjNDQ1ZIOG9yS0dYdGhsMWFWSkhqQkRUcVZlTE5VS3prVEhEYUtoOFdqYUM1dmxRU1RoVExwL3pHRDdyb09SdG5rdkw3YjdTVlpFMEQzRG1BN1BiYmNaVTliWVM5bjg2Mm8xVG1UcU9TUjlGSGQ4MWkvWEE9PQ==";
const QString QQ_AR_LIST_URL        = "UGx5NDFTQzJ2V2Fpb3JxTnVHVVBmM0p1SlJ0RTg0ZGp4LzBxbzBpVjB3bWM2ckZSMytkVGdQSVZZNGRaU0M3YXFkWWxkYUxPS015VWdpQ2RVOVZRMTFPVERJZ0NXOEtHV0p1V2I0TTh5YlBab1FYcGV6eXBFa0hoQmxZZzQ3N1BBUkoveWJraWdYWDVLOVdnOWp0OVMzYityVnNwaFh0d2VlcVI1dUkwUFI4UTFGdjBpZjhoZFBWVnUzWUlyWk1Qc0praUVtSUVXelpodGkrRlVsVENSWFl6R0V2eXZqeDRrTWNSQWFwTFZucnlYeEJsNkpDeTg3d0tKUzFVcW9RY2ZtT2NuWUNMby9HSEc3b1hubDRIdk05WTlGYz0=";
///////////////////////////////////////////////////////////////////////////////
const QString QQ_SONG_TOPLIST_C_URL = "NGtsYzRNNjFCSlhOVUFnMk0rSHFpZll4WUdsY0ZWcERWWXFtbnBIU2JGV0lWLzhNU2NFWUpaS3ZaOTZFdm9VQlBLdzl0S0FOTEhaNDhpQmkzSGt2QXFLcnhDNjNuZHNQOVM2Tk1UMjRReHVFRnQ3eS9JakUwOHBYa2RXUzNtcGQwaTNEdUJEZXlYdllya2xPWXVzRkFqRFFWV29nSkowN2NuNmxxRkhTaFFRZzhCZSs2bXIzK1hzNHhoakppdGM5TTVFNlkwV2pRV3hpbzR4WTFNdU55STZ2UVdnVVRVRlBZMjA2U1pzbVdobWd6S3lEMGZtVWJpbUhwT011U1pJRw==";
const QString QQ_SONG_TOPLIST_A_URL = "eWM4LzBEa0wyRkFkdHhTVDVnb1ZNZHZ0MG5xQTJkS0d0QjQ3dGdxVlBGRlNLb3h1TTBmczVDY3MreC9qNEsxblVrYVg2Y2pBMXVZSUhycnV5cnlNbVhoRms1VVlBVEZKS3A2bHR3MURYYXZLZUtwTTZRZ0xyMWl1ZTVuRXRjeXp2RHRaSGc9PQ==";
///////////////////////////////////////////////////////////////////////////////
const QString QQ_MV_INFO_URL        = "ZjhkZmd4LzNnQi9seFJpUmZ0L0hLQkZ1dFdnME5lOWI5dlgvUFpHUUw5U2xQdzJXZzhxditTWTNTWllKTVp4dFo2bmlqc1Y4TUpoeTFEdUFnbkNVOE5WL0RVYVFzSHR0UFpzN2pBPT0=";
const QString QQ_MV_KEY_URL         = "cEo4MkdYaVNIUEJFTGNnd0hGai8zUFVWQStTQ3NyamM1YmovTzdGQWRwRFU2OExQV0MxMUxSN0NkSmJrT3MzTTNVaFhSUytNWmFrKys3ODdhWldaNWljZXBaRmFHeUg1dHdGb1JSNEJpQ3orZFIwVUIrUURJUFRJZ25SakVpN20=";
///////////////////////////////////////////////////////////////////////////////
const QString QQ_COMMIT_URL         = "Zk9wcGVJRXMxaTg5enBsVEFGc0hGWVpkT0gvVHNCNDBHSXU0anR6bzdTQnpEN2dlZDg4TllZa256aUhZUys1UURDdFV3ZFZmZmRzSFlXVDhlcTM4TFQvNnpWU0VqR1k5WGZZaWpnPT0=";
const QString QQ_SG_COMMIT_DATA_URL = "d0F1WXh6MWt2SXN6WktuU24wUTNXNERCZmJXb296QUhicFFZb29DSjhEeFN2dldqWHgrL0cvSG1sRVdaWHMzbGliaWFzbklEaTQ5UzZxY3RVNlpqU1huSDJCWVRCYU5YQ25HT2ozVE95aGRXUy9malNrNU9GcUVHSTkvMHA5blNxUE10ZW1lNEpLMWM2dFA1cHQzdjdDVDRXb2IxbGVhbXRXQzJRR1FrNWtrb3FmV01KVG5TVkxyUEVCYmxjMC9zOVZSWHVTRThmSzkzalZBd0p2bnRkZXh0QmRTV3N3OVh6alZ3UWJ4ck8xdEZ3U2xCdmNPT0RkRHpRb3phR3Z6TXZDcjd5TzU2cHJoMElLeFE=";
///////////////////////////////////////////////////////////////////////////////
const QString QQ_PL_COMMIT_DATA_URL = "c1BKYmVFa1FRc0trZ0NtVVVMOEMrNXNDWFRiYzJLYXBQaUdXZWZobjlrZy94cVdNNTlJSTQ1S0xjWlpBSEhPWVlzZXREb0ZLSkFoVWJteFpqRlNiRjNRSHRDNVFEbXRyRnFRVW9JTTc1MW11ZFp4cVh2QmxFQXplWHZEeWNRUERBYThYM0dqZFZqeVVTYW1GL2pkeHpkV2EvbnlNakdIc0UrY2MrNVRKWWxKQ3RmTEdSYmt6LzRTU2JFQm9iOG96VXZ6TVlveE5rSXpvQUlaL2JXN2RKWnJXT1BjcjF1MEsrelI0VS9kOVc0SndkQk5LNWhRekp2WTFnd1VBdzJpMytDeENJenN0S0VKUS9yTVk=";
const QString QQ_PLAYLIST_URL       = "M2xMcmljcUNoVDNKemw1YWhEWkIxUStMUUNySnYwdUxHUlQvRTcyanBPRnR6TEU2ZlBUZXc3QllEd25lSjBKT2hMeGYrQnNZMmhiSmZKd3UrWjJISWNJWlJ2MFpFTm95VjB2REdLM2RPUVlpeWhGblUvZ0toOWJFTUlKak81ZElybERrTk5JSHJBUXMyZjJraTcyejZVUE1FbDJtMUhwU3VyWFl4Tk52QVM4QnliWFlERzEzdGw1aFBSb0lRVy9NVThlT2VOOFY3MlV5RDFtcVBRelFhbjNzRUdqQWtPbVJKMllWWGdOZFROKzZPcnc1bCtySnd1R0hINVdzemJWR3R2NEd6OFhOQlhVME14eEI3WVlXTFpzZGVuUDZLR2Nw";
const QString QQ_PLAYLIST_ATTR_URL  = "OVNWZXI3NkNOVXVONnZMWXNMaitKR3NzcmJKcFNKTEpaNTBQT3RyTzM3OWJ2Y2c4dTFlOHpHcDh0c1p3OFpFWEJySUtUQjRUUDFVU0YyRGdjR3RGZmt2YlVTSFMyaEE1TWtKRDVjcy9qZXNWL3hKbFR4SDljK05PVjY0WXZRdUVHNFZhRkNpZ2EvNGRaWmpJWFhRM0JPS3pVa0w4Tjh4NUpFd0M5Z0dtVGNMNEMrZzUzTkxZeDRDNDlYM01BVkpSWFdjUUkzS25UMVczZUF1MnZjak80Qk15QkRDYzkrM2lUTEoyeG1HSmlMUFNxckF0dmh1bTNUcDhhZ1Z4WTdKTXRVOFhINDBZYm9XUDUzVzdjQXpuTldoeTJmVFZDTGh0UHo0Q3lJSHZOb1A4VnkyQUxGQnNpdFZsd1gzQ0lSQ0Q=";
///////////////////////////////////////////////////////////////////////////
const QString QQ_RCM_URL            = "dEFUcDF6NjZKOVZ1bk01OTFhVHZBd3Jlb1J2K08xVkZsVkw4R054SGp3eXluSS9pREZrMGUwUEo1WnJCbHVla0tjdHAvajViN3puMzUzNVJFdXBoTzArbHl4amZObXhCcnczUTh6TXZxMFBvTWFUQXlQTy9hMHVacWJvUUE5NGpvbmVXd3VKMGJCcHVkRzk5bmZ1N0tPL2RCUjNRZGFMNlU4MGlOYmJaSEpaRWxDVmkzNFVoSklPVHg1dXByVDZNanArZkpzMVovY2JBM0IxN0RoMWlwUWVQakxiZlQvMEt4b2JNW"
                                      "GZyQldoQUs5MUsxUTY3eDk4UCtFRm9PaTA1TkpkSXVzUWx6dUJsaTBCV3FMc2g2djNNRkZDVEltZmNVTzN5ZTg4cUZJZmpnUm13RklGTnJHNEhTSHAvdmVmWUdaYVJBK0JwVlM5Rlk5Sm13aXd0NjlrZHFqU0V2NTlEa3VWWnVudUZYWFJ5cWMveVdDQ1BJeDY3bEJpczZvekJ6OVFEMXJtQmRxUFk9";
///////////////////////////////////////////////////////////////////////////
const QString QQ_SUGGEST_URL        = "YVZrME9hWGRKNjJySkE1djh3T0wwVG1TY1FzVU94ODY2aW83TEFqRVROWVRpU2EzcG00NGxvZ0RYcm8xdE50bTkvSHdKMjc3aW9kbENxbnpRMnU4RzVtRVJDZW4xMENuRytnVDhWMEV3WUtrME12VFlxNTRKdGtaMGhSVDJHRmdONVY5aU9uOXBkSDdqK1drSEZnYW9tZi96NHVOc0NLQWVXRi9iV0t0cnNGckVDbjF6WVRaWmNJN1B4R0hpOVM5MUZxODFjTk16N3pEem95UVphNW81a3hSY1RjNXZzNzVzVzBvZjRkZGlHUjcvQTBOZEdKSDFnPT0=";
///////////////////////////////////////////////////////////////////////////


class QNetworkAccessManager;

/*! @brief The class to qq query download interface.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicDownLoadQQInterface
{
public:
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongAttribute(MusicObject::MusicSongInformation *info, const QVariantMap &key,
                                    int bitrate);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongAttribute(MusicObject::MusicSongInformation *info, const QVariantMap &key,
                                    const QString &quality, bool all);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongAttributePlus(MusicObject::MusicSongInformation *info, const QVariantMap &key,
                                        int bitrate);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongAttributePlus(MusicObject::MusicSongInformation *info, const QVariantMap &key);
    /*!
     * Get music key.
     */
    QString getMusicKey(const QString &time);

};

#endif // MUSICDOWNLOADQQINTERFACE_H
