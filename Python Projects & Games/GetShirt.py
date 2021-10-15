{
  "$schema": "./node_modules/@angular/cli/lib/config/schema.json",
  "version": 1,
  "newProjectRoot": "projects",
  "projects": {
    "meetingroominventory": {
      "projectType": "application",
      "schematics": {
        "@schematics/angular:component": {
          "style": "scss"
        }
      },
      "root": "projects/pages/meetingroominventory",
      "sourceRoot": "projects/pages/meetingroominventory/src",
      "prefix": "app",
      "architect": {
        "build": {
          "builder": "@angular-devkit/build-angular:browser",
          "options": {
            "outputPath": "../app/meetingroominventory",
            "index": "projects/pages/meetingroominventory/src/index.html",
            "main": "projects/pages/meetingroominventory/src/main.ts",
            "polyfills": "projects/pages/meetingroominventory/src/polyfills.ts",
            "tsConfig": "projects/pages/meetingroominventory/tsconfig.app.json",
            "aot": true,
            "assets": [
              "projects/pages/meetingroominventory/src/favicon.ico",
              "projects/pages/meetingroominventory/src/assets",
              {
                "glob": "**/*",
                "input": "assets/",
                "output": "assets/"
              }
            ],
            "styles": [
              "./node_modules/@angular/material/prebuilt-themes/deeppurple-amber.css",
              "node_modules/bootstrap/dist/css/bootstrap.min.css",
              "projects/pages/meetingroominventory/src/styles.scss",
              "assets/less/lato_font.css",
              "assets/less/icon_font.css"
            ],
            "stylePreprocessorOptions": {
              "includePaths": [
                "styles"
              ]
            },
            "scripts": [
              "node_modules/jquery/dist/jquery.min.js",
              "node_modules/popper.js/dist/umd/popper.min.js",
              "node_modules/bootstrap/dist/js/bootstrap.min.js"
            ]
          },
          "configurations": {
            "production": {
              "fileReplacements": [
                {
                  "replace": "projects/pages/meetingroominventory/src/environments/environment.ts",
                  "with": "projects/pages/meetingroominventory/src/environments/environment.prod.ts"
                }
              ],
              "optimization": true,
              "outputHashing": "all",
              "sourceMap": false,
              "extractCss": true,
              "namedChunks": false,
              "extractLicenses": true,
              "vendorChunk": false,
              "buildOptimizer": true,
              "budgets": [
                {
                  "type": "initial",
                  "maximumWarning": "2mb",
                  "maximumError": "5mb"
                },
                {
                  "type": "anyComponentStyle",
                  "maximumWarning": "6kb",
                  "maximumError": "10kb"
                }
              ]
            }
          }
        },
        "serve": {
          "builder": "@angular-devkit/build-angular:dev-server",
          "options": {
            "browserTarget": "meetingroominventory:build"
          },
          "configurations": {
            "production": {
              "browserTarget": "meetingroominventory:build:production"
            }
          }
        },
        "extract-i18n": {
          "builder": "@angular-devkit/build-angular:extract-i18n",
          "options": {
            "browserTarget": "meetingroominventory:build"
          }
        },
        "test": {
          "builder": "@angular-devkit/build-angular:karma",
          "options": {
            "main": "projects/pages/meetingroominventory/src/test.ts",
            "polyfills": "projects/pages/meetingroominventory/src/polyfills.ts",
            "tsConfig": "projects/pages/meetingroominventory/tsconfig.spec.json",
            "karmaConfig": "projects/pages/meetingroominventory/karma.conf.js",
            "assets": [
              "projects/pages/meetingroominventory/src/favicon.ico",
              "projects/pages/meetingroominventory/src/assets",
              {
                "glob": "**/*",
                "input": "assets/",
                "output": "assets/"
              }
            ],
            "styles": [
              "./node_modules/@angular/material/prebuilt-themes/deeppurple-amber.css",
              "projects/pages/meetingroominventory/src/styles.scss",
              "node_modules/bootstrap/dist/css/bootstrap.min.css"
            ],
            "scripts": [
              "node_modules/jquery/dist/jquery.min.js",
              "node_modules/bootstrap/dist/js/bootstrap.min.js"
            ]
          }
        },
        "lint": {
          "builder": "@angular-devkit/build-angular:tslint",
          "options": {
            "tsConfig": [
              "projects/pages/meetingroominventory/tsconfig.app.json",
              "projects/pages/meetingroominventory/tsconfig.spec.json",
              "projects/pages/meetingroominventory/e2e/tsconfig.json"
            ],
            "exclude": [
              "**/node_modules/**"
            ]
          }
        },
        "e2e": {
          "builder": "@angular-devkit/build-angular:protractor",
          "options": {
            "protractorConfig": "projects/pages/meetingroominventory/e2e/protractor.conf.js",
            "devServerTarget": "meetingroominventory:serve"
          },
          "configurations": {
            "production": {
              "devServerTarget": "meetingroominventory:serve:production"
            }
          }
        }
      }
    }
  },
  "defaultProject": "meetingroominventory"
}